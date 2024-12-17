#include "InputManager.h"


// ------------------------------------------------
///					　更新処理
/// ------------------------------------------------
void InputManager::Update()
{
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
}


// ------------------------------------------------
///				
/// ------------------------------------------------
bool InputManager::IsKeyPressed(int key)
{
	return preKeys[key] == 0 && keys[key] != 0;
}


// ------------------------------------------------
///				
/// ------------------------------------------------
bool InputManager::IsKeyDown(int key)
{
	return keys[key] != 0;
}
