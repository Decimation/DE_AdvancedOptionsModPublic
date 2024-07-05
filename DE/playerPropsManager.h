#pragma once

#include <string>
#include "TypeInfoManager.h"
#include "idMapInstanceLocalManager.h"

class PlayerPropsManager
{
private:

public:

	static idDeclInventory* getEquipmentDecl(equipmentType_t equipmentType);

	static std::string getDebugStrV2();

	//static std::string getDebugStr();
};

