#include "Engine/Core/CoreEngine.h"
#include "Game/SceneManager.h"

int main(int argc, char* argv[]) {
	//Set game interface here 
	CoreEngine::GetInstance()->SetGameInterface(new SceneManager);

	if (!CoreEngine::GetInstance()->OnCreate("Game211 Midstone", 800, 600)) {
		return 0;
	}

	CoreEngine::GetInstance()->Run();

	return 0;
}