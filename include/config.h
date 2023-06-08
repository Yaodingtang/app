#ifndef _CONFIG_H
#define _CONFIG_H

#include "common.h"

#define ITEMCFG_MAX_NUM 100
#define CFG_FILE "/etc/test_gui/gui.conf"

typedef struct ItemCfg
{
	int index;
	char name[100];
	int bCanBeTouched;
	char command[100];
}ItemCfg, *PItemCfg;

int GetItemCfgCount(void);
PItemCfg GetItemCfgByIndex(int index);
PItemCfg GetItemCfgByName(char *name);
int ParseConfigFile();

#endif
