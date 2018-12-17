#pragma once

#define ECHELLE_COUNT 4
#define BLOCK_COUNT_X 8
#define BLOCK_COUNT_Y 5
#define BLOCK_SPACE 110.f
#define COIN_COUNT 4
#define COIN_SPACE 120.f
#define ENEMY_COUNT 4

class Game
{
public:
	Game();
	~Game() { };
	void run();

private:
	void processEvents();
	void update(sf::Time elapsedTime);
	void render();

	void updateStatistics(sf::Time elapsedTime);
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
	void IsOver();
	void IsWon();

private:
	static const float		PlayerSpeed;
	static const float		EnemySpeed;
	static const sf::Time	TimePerFrame;

	bool IsFinished;

	sf::RenderWindow		mWindow;
	sf::Texture	mTexture;
	sf::Sprite	mPlayer;
	sf::Font	mFont;
	sf::Text	mStatisticsText;
	sf::Time	mStatisticsUpdateTime;
	sf::Text	mEndGameText;
	sf::Sprite	mPeach;
	sf::Texture mPeachTexture;

	sf::Texture mRightTexture;
	sf::Texture mLeftTexture;
	sf::Texture mUpTexture;

	std::size_t	mStatisticsNumFrames;
	bool mIsMovingUp;
	bool mIsMovingDown;
	bool mIsMovingRight;
	bool mIsMovingLeft;

	sf::Texture	_TextureEchelle;
	sf::Sprite	_Echelle[ECHELLE_COUNT];
	sf::Texture	_TextureBlock;
	sf::Sprite	_Block[BLOCK_COUNT_X][BLOCK_COUNT_Y];
	sf::Texture	_TextureWeapon;
	sf::Sprite	_Weapon;
	sf::Vector2u _sizeBlock;
	sf::Vector2u _sizeMario;
	sf::Texture _textureCoin;
	sf::Sprite _coin[COIN_COUNT][COIN_COUNT];
	sf::Texture _textureEnemy;
	sf::Sprite _enemy[ENEMY_COUNT];
};

