cmd_/home/ys270/proj5/sneaky_mod.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o /home/ys270/proj5/sneaky_mod.ko /home/ys270/proj5/sneaky_mod.o /home/ys270/proj5/sneaky_mod.mod.o