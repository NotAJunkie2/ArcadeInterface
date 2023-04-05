/*
** EPITECH PROJECT, 2023
** LibInterface.hpp
** File description:
** LibInterface
*/

#ifndef LIBINTERFACE_HPP_
    #define LIBINTERFACE_HPP_
    #include <iostream>
    #include <memory>
    #include <vector>

namespace Arcade {
    using vector2I_t = struct vector2I_s {
        float x;
        float y;
    };

    using rect_t = struct rect_s {
        int x;
        int y;
        int width;
        int height;
    };

    using object_t = struct object_s {
        rect_t atlasRect;
        vector2I_t pos;
    };

    using text_object_t = struct text_object_s {
        std::string text;
        vector2I_t pos;
    };

    enum class KeyInput {
        ARCK_LEFT = 1,
        ARCK_RIGHT,
        ARCK_UP,
        ARCK_DOWN,
        ARCK_A,
        ARCK_Z,
        ARCK_E,
        ARCK_R,
        ARCK_T,
        ARCK_Y,
        ARCK_Q,
        ARCK_S,
        ARCK_D,
        ARCK_F,
        ARCK_G,
        ARCK_H,
        ARCK_W,
        ARCK_X,
        ARCK_C,
        ARCK_V,
        ARCK_B,
        ARCK_N,
        ARCK_UNKNOWN = -1,
        ARCK_ESC
    };

    using assets_t = struct assets_s {
        std::string path;
        std::string charAtlas;
    };

    class IDisplayModule {
        public :
            virtual ~IDisplayModule() = default;

            // Window methods
            virtual void createWindow(size_t width, size_t height, const std::string &name = "Arcade") = 0;
            virtual void destroyWindow() = 0;
            virtual void clearWindow() = 0;
            virtual void drawWindow(std::vector<object_t> obj) = 0;
            virtual void updateWindow() = 0;
            virtual void drawText(std::vector<text_object_t> text) = 0;

            // Load
            virtual void loadAtlas(const Arcade::assets_t &assets) = 0;

            // Get input
            virtual KeyInput getInput() const = 0;
    };

    class IGameModule {
        public:
            virtual ~IGameModule() = default;

            virtual void init() = 0;
            virtual void update(float dt) = 0;
            virtual void draw(IDisplayModule &display) = 0;
            virtual void destroy() = 0;
            virtual void restart() = 0;
            virtual void pause() = 0;
            virtual void resume() = 0;

            virtual void inputEvent(Arcade::KeyInput input) = 0;
    };
}

#endif /* !LIBINTERFACE_HPP_ */
