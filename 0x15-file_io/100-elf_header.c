#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_header(unsigned char *e_ident);
void close_elf(int elf);

void check_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}
}

void print_header(unsigned char *e_ident)
{
	printf("ELF Header:\n");
	printf(" Magic: ");

	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
	printf(" Class: ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("none\n");
	} else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	} else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	} else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
	printf(" Data: ");

	if (e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	} else if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	} else
	{
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
	printf(" Version: %d", e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	} else
	{
		printf("\n");
	}
	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone
