#pragma once

#include "iostream"

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
        L, // NEXT GRAPHIC
        G, // NEXT GAME
        R, // RESTART GAME
        ESCAPE, // GO TO MENU
        ENTER, // SELECTION
        OTHER, // OTHER
    };

    class DisplayEvent {
        public:
            Button type;
    };

    enum GameEventType {
        NEXT_GAME,
        NEXT_LIB,
        LOAD_LIB, // USED FOR MENU ONLY
        QUIT_GAME, // SHOULD BE SEND BY THE GAME TO THE CORE TO CLOSE AND DELETE THE GAME
        BACK_TO_MENU, // BACK TO MENU
        EXIT, // EXIT PROGRAM
        RESTART_GAME, // RESTART GAME
    };

    class GameEvent {
        public:
            GameEventType type;
            const std::string library;      // type==L : Library to load
    };
}