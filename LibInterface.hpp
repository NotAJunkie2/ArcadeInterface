/*
** EPITECH PROJECT, 2023
** LibInterface.hpp
** File description:
** LibInterface
*/

#ifndef LIBINTERFACE_HPP_
    #define LIBINTERFACE_HPP_
    #include <iostream>

namespace Arcade {
    enum input {
        LEFT = 1,
        RIGHT,
        UP,
        DOWN,
        SWITCH,
        UKNOWN = -1
    };

    enum status {
        INGAME,
        GAMEOVER
    };

    template <typename T>
    class IArcadeObject {
        T _object;

        public:
            virtual ~IArcadeObject() = default;

            virtual void draw(void *obj) = 0;
            virtual void update() = 0;
            virtual void destroy() = 0;
    };

    class IDisplayModule {
        public :
            virtual ~IDisplayModule() = default;

            // Window methods
            virtual void createWindow(size_t width, size_t height, const std::string name) = 0;
            virtual void clearWindow() = 0;
            virtual void updateWindow() = 0;
            virtual void destroyWindow() = 0;
            virtual void drawWindow(void *obj) = 0;

            // Getters
            virtual size_t getWidth() const = 0;
            virtual size_t getHeight() const = 0;
            virtual std::pair<size_t, size_t> getDimensions() const = 0;
            virtual bool isWindowOpen() const = 0;
            virtual bool isGraphical() const = 0;

            // Setters
            virtual void setWidth(size_t w) = 0;
            virtual void setHeight(size_t h) = 0;
            virtual void setDimensions(std::pair<size_t, size_t>) = 0;

            // Load
            virtual void loadFont(std::string path, std::string key) = 0;
            virtual void loadTexture(std::string path, std::string key) = 0;
            virtual void loadMap(std::string path) = 0;

            // Get input
            virtual input getInput() const = 0;
    };

    class IGameModule {
        public:
            virtual ~IGameModule() = default;

            virtual void startTimer() = 0;
            virtual void treatInput(input key) = 0;

            // Getters
            virtual int getScore() const = 0;
            virtual std::pair<size_t, size_t> getPlayerPos() const = 0;
            virtual status getGameStatus() const = 0;

            // Setters
            virtual void incScore(int increment = 1) = 0;
            virtual void decScore(int decrement = 1) = 0;
            virtual void setScore(int score) = 0;
            virtual void setPlayerPos(std::pair<size_t, size_t> pos) = 0;
            virtual void setEnemiesPos(std::pair<size_t, size_t> pos) = 0;
            virtual void setGameStatus(status gameStatus) const = 0;
    };
}

#endif /* !LIBINTERFACE_HPP_ */
