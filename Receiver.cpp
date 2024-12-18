#include "Receiver.h"

void Receiver::Move(int deltaX, int deltaY)
{
	positionX += deltaX * 10; // 水平方向に10px移動
	positionY += deltaY * 10; // 垂直方向に10px移動
}

void Receiver::Draw() const
{
	Novice::DrawBox(positionX - 25, positionY - 25, 50, 50, 0.0f, 0xFFFFFFFF, kFillModeSolid);
}