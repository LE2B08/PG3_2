#include "SceneManager.h"

// 静的メンバ変数
State* SceneManager::currentScene = nullptr;
State* SceneManager::nextScene = nullptr;


/// ------------------------------------------------
///					　初期化処理
/// ------------------------------------------------
void SceneManager::Initialize(State* startScene)
{
	currentScene = startScene;
	nextScene = nullptr;
}


/// ------------------------------------------------
///					　更新処理
/// ------------------------------------------------
void SceneManager::Update(InputManager& input)
{
	if (nextScene)
	{
		delete currentScene;
		currentScene = nextScene;
		nextScene = nullptr;
	}
	if (currentScene)
	{
		currentScene->Update(input);
	}
}


/// ------------------------------------------------
///					　描画処理
/// ------------------------------------------------
void SceneManager::Draw()
{
	if (currentScene)
	{
		currentScene->Draw();
	}
}


/// ------------------------------------------------
///				次のシーンを設定する
/// ------------------------------------------------
void SceneManager::SetNextScene(State* scene)
{
	nextScene = scene;
}


/// ------------------------------------------------
///					　終了処理
/// ------------------------------------------------
void SceneManager::Finalize()
{
	if (currentScene)
	{
		delete currentScene;
	}
}
