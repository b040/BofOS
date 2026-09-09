/*
    COPYRIGHT
*/

#include <app/critical/commands/info.h>
#include <drivers/vga.h>
#include <kernel/kernel.h>

void info(void) {;
  vga_write(
	"        @@@                 \n"
	"        @@@@@               \n"
	"        @@@ @@@   @@@@@@   Name: " KERNEL_NAME " \n"
	"         @@@@@@@@@@ @@@    Version: " KERNEL_VERSION "  \n"
	"  @@@@@@@@@@    @@ @@      Build: " KERNEL_BUILD "  \n"
	"    @@@@  @@      @@@      Codename: " KERNEL_CODENAME "  \n"
	"       @@@@@@@   @@@@@     Compile Date: " KERNEL_COMPILE_DATE " \n"
	"          @@ @@@@@@@@@@    Compile Time: "KERNEL_COMPILE_TIME"  \n"
	"          @@  @@@  @@@@@   Team: " TEAM_NAME "  \n"
	"          @@ @@            Architecture: " KERNEL_ARCH " \n"
	"          @@@@              \n"
	"           @@@             this operating system is created with love <3 \n"
	"           @@               \n"
  );
}
