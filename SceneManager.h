#pragma once
#include "State.h"

/// ------------------------------------------------
///				シーンの管理クラス
/// ------------------------------------------------
class SceneManager
{
public: /// ---------- メンバ関数 ---------- ///
	
	// 初期化処理
	static void Initialize(State* startScene);

	// 更新処理
	static void Update(InputManager& input);
	
	// 描画処理
	static void Draw();

	// 次のシーンをセットする関数
	static void SetNextScene(State* scene);

	// 終了処理
	static void Finalize();

private: /// ---------- メンバ変数 ---------- ///

	static State* currentScene; // 現在のシーン
	static State* nextScene;	// 次のシーン

};

