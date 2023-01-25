#pragma once

class SceneManager final
{

private:
	//�R���X�g���N�^��private�ɂ���
	SceneManager();
	//�f�X�g���N�^��private�ɂ���
	~SceneManager();
public:
	// �C���X�^���X
	static SceneManager* GetInstance();

public:
	// �R�s�[�R���X�g���N�^�𖳌��ɂ���
	SceneManager(const SceneManager&) = delete;
	// ������Z�q�𖳌��ɂ���
	SceneManager& operator=(const SceneManager&) = delete;

	void ChangeScene(int sceneNo);

	void TitleScene();
	void NewGameScene();
	void GamePlayScene();
	void GameClear();

};
