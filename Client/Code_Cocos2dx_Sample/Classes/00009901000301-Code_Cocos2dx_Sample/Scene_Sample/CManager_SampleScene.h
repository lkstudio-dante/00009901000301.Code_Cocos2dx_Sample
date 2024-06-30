#pragma once

#include "../Global/Define/KDefine+Global.h"

/**
 * 샘플 씬 관리자
 */
class CManager_SampleScene : public Scene
{
	CREATE_FUNC(CManager_SampleScene);

public:			// public 함수

	/** 초기화 */
	virtual bool init(void);

public:			// public 클래스 함수

	/** 씬을 생성한다 */
	static Scene* createScene(void);
};
