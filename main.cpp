#include "GameScene.h"
#include <windows.h>

int main() {

	// �֐��̐錾
	GameScene* gamescene_ = new GameScene;
	gamescene_->Initialize();

	// �Q�[�����[�v
	while (true) {

		// �X�V����
		gamescene_->Update();

		// �`�揈��
		gamescene_->Draw();

		// �X���[�v
		Sleep(1 * 1000);
	}

	delete gamescene_;

	system("pause");
	return 0;
}