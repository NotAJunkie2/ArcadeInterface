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
    enum class input {
        ARCADE_LEFT = 1,
        ARCADE_RIGHT,
        ARCADE_UP,
        ARCADE_DOWN,
        ARCADE_NEXT_LIB,
        ARCADE_NEXT_GAME,
        ARCADE_RESTART,
        ARCADE_MENU,
        ARCADE_EXIT,
        ARCADE_UNKNOWN = -1
    };

    class IDisplayModule {
        public :
            virtual ~IDisplayModule() = default;

            // Window methods
            virtual void createWindow(size_t width, size_t height, const std::string &name = "Arcade") = 0;
            virtual void clearWindow() = 0;
            virtual void destroyWindow() = 0;
            // virtual void drawWindow(void *obj) = 0;

            // Get input
            virtual input getInput() const = 0;
    };
}

#endif /* !LIBINTERFACE_HPP_ */
