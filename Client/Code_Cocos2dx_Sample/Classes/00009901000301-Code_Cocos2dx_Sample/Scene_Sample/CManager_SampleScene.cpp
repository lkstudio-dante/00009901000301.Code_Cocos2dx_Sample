#include "CManager_SampleScene.h"

bool CManager_SampleScene::init(void)
{
	// 초기화가 불가능 할 경우
	if(!Scene::init())
	{
		return false;
	}

	return true;
}

Scene* CManager_SampleScene::createScene(void)
{
	return CManager_SampleScene::create();
}
