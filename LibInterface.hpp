/*
** EPITECH PROJECT, 2023
** LibInterface.hpp
** File description:
** LibInterface
*/

#ifndef LIBINTERFACE_HPP_
    #define LIBINTERFACE_HPP_
    #include <iostream>

class IArcadeSprite {

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

        // Setters
        virtual void setWidth(size_t w) = 0;
        virtual void setHeight(size_t h) = 0;
        virtual void setDimensions(std::pair<size_t, size_t>) = 0;

        // Load
        virtual void loadFont(std::string path, std::string key) = 0;
        virtual void loadTexture(std::string path, std::string key) = 0;
};

#endif /* !LIBINTERFACE_HPP_ */
