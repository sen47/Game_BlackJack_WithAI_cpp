#pragma once
#include<string>

#include"GenericPlayer.h"

class Player :public GenericPlayer
{

public:
	Player(const std::string& name);

	bool isHitting()override;
};