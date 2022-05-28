#ifndef SHIFTER_EMU_CONTROLLER_EMU_H
#define SHIFTER_EMU_CONTROLLER_EMU_H

#define WIN32_LEAN_AND_MEAN

int  controller_emu_init();
void controller_emu_quit();

void controller_emu_set_input(int button, bool value);

#endif //SHIFTER_EMU_CONTROLLER_EMU_H
