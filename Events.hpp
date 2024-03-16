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
        Q, // QUIT PROGRAM
        ESCAPE, // GO TO MENU
        ENTER, // SELECTION
    };

    class DisplayEvent {
        Button type;
    };

    enum GameEventType {
        LOAD_LIB,
        LOAD_GAME,
    };
    
    class GameEvent {
        GameEventType type;
        union {
            const char *library;      // type==L : Library to load
            const char *game;         // type==G : Game to load
        };
    };
}
