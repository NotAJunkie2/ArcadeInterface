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

namespace Arcade {
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
        ARCK_UNKNOWN = -1
    };

    using vector2I_t = struct vector_s {
        int x;
        int y;
    };

    class IGameModule {
        public:
            virtual ~IGameModule() = default;

            virtual void init() = 0;
            virtual void update(size_t dt) = 0;
            virtual void destroy() = 0;
            virtual void restart() = 0;
            virtual void pause() = 0;
            virtual void resume() = 0;

            virtual KeyInput getInput() const = 0;
    };
}

#endif /* !LIBINTERFACE_HPP_ */
