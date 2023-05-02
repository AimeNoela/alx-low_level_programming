#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <elf.h>
#include "main.h"

/**
 * elf_header - displays the information contained in the ELF header
 * @filename: name of the ELF file
 * Return: 0 on success, 98 on error
 */
int elf_header(const char *filename)
{
	int fd, ret = 98;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Could not open file %s\n", filename);
		return (ret);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Could not read ELF header from file %s\n", filename);
		goto cleanup;
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: File %s is not an ELF file\n", filename);
		goto cleanup;
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
		break;
	}

	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
		break;
	}

	printf("  Version:                           %d", header.e_ident[EI_VERSION]);
	if (header.e_ident[EI_VERSION] == EV_NONE)
		printf(" (invalid)\n");
	else if (header.e_ident[EI_VERSION] != EV_CURRENT)
		printf(" (unknown)\n");
	else
		printf("\n");

	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX System V ABI\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX ABI\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD ABI\n");
		break;
	case ELFOSABI_LINUX:
		printf("Linux ABI\n");
		break;
	case ELFOSABI_SOL