#pragma once
#include "GeneratedClasses.h"
#include "idMapInstanceLocalManager.h"

using idPlayerPlaySoundEventFp = __int64(__fastcall*)(
	idPlayer*     idPlayerPtr,
	idSoundEvent* idSoundEventPtr
);

/// <summary>
/// related to the sounds in idDeclPlayerProps::playerSounds_t. mainly used to trigger out of items sound atm.
/// </summary>
class PlayerSoundManager
{
private:
    static inline idPlayerPlaySoundEventFp m_playSoundFp = nullptr;

public:

    //static idSoundEvent* getOutOfItemSoundEventPtr();
    static void playOutOfItemSound();
};

