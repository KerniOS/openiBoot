#ifndef HW_BUTTONS_H
#define HW_BUTTONS_H

// Device
#define BUTTONS_HOLD 0x1605

#ifdef CONFIG_IPOD_TOUCH_1G
#define BUTTONS_HOME 0x1606
#define BUTTONS_HOME_IRQ 0x2E
#else
#define BUTTONS_HOME 0x1600
#define BUTTONS_HOME_IRQ 0x28
#define BUTTONS_VOLUP 0x1601
#define BUTTONS_VOLDOWN 0x1602
#define BUTTONS_RINGERAB 0x1603
#endif

#define BUTTONS_IIC_STATE 0x4B

#define BUTTONS_HOLD_IRQ 0x2D
#define BUTTONS_VOLUP_IRQ 0x29
#define BUTTONS_VOLDOWN_IRQ 0x2A
#define BUTTONS_RINGERAB_IRQ 0x2B

#define BUTTONS_HOLD_IRQTYPE 1
#define BUTTONS_HOME_IRQTYPE 1
#define BUTTONS_VOLUP_IRQTYPE 1
#define BUTTONS_VOLDOWN_IRQTYPE 1
#define BUTTONS_RINGERAB_IRQTYPE 1

#define BUTTONS_HOLD_IRQLEVEL 1
#define BUTTONS_HOME_IRQLEVEL 1
#define BUTTONS_VOLUP_IRQLEVEL 0
#define BUTTONS_VOLDOWN_IRQLEVEL 0
#define BUTTONS_RINGERAB_IRQLEVEL 1

#define BUTTONS_HOLD_IRQAUTOFLIP 1
#define BUTTONS_HOME_IRQAUTOFLIP 1
#define BUTTONS_VOLUP_IRQAUTOFLIP 1
#define BUTTONS_VOLDOWN_IRQAUTOFLIP 1
#define BUTTONS_RINGERAB_IRQAUTOFLIP 1

#endif

