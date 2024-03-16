/*
** EPITECH PROJECT, 2024
** arcade_interface
** File description:
** Events
*/

#pragma once

namespace arcade {

    enum class Button {
        LEFT, // MOVE LEFT
        RIGHT, // MOVE RIGHT
        UP, // MOVE UP
        DOWN, // MOVE DOWN
        X, // ACTION IN GAME
        C, // ACTION IN GAME
        SPACE, // ACTION IN GAME
        L, // CHANGE LIBRARY
        G, // CHANGE GAME
        Q, // QUIT PROGRAM
        ESCAPE, // GO TO MENU
    };

    class DisplayEvent {
        Button type;
        union {
            const char *library;      // type==L : Library to load
            const char *game;         // type==G : Game to load
        };
    };
}
