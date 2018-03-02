//
//  StateController.cpp
//
//  Created by Coralie on 01/03/2018.
//
//

#include "StateController.h"

// PRIVATE ============================================================ PRIVATE
// ------------------------------------------------------------------- methodes

// END PRIVATE
// PUBLIC ============================================================== PUBLIC
// ---------------------------------------------------------------- Constuctors

StateController::StateController()  {
  // states[INIT_STATE] s'utilise comme un pointeur car c'est un tableau de pointeurs
  states[INIT_STATE] = new InitState(this);
  states[WAIT_FRIEND_STATE] = new WaitFriendState(this);

  currentState = states[INIT_STATE];
}

// ------------------------------------------------------------------- Methodes
void StateController::changeState(StateName name){
    currentState = states[name];
}
void StateController::cLoop(){
  currentState->sLoop(); // accéder à un élément de l'objet pointé
}
// --------------------------------------------------------- Getteurs/Sertteurs

// ------------------------------------------------------------------ Destuctor

StateController::~StateController() {
  delete states[INIT_STATE];
  delete states[WAIT_FRIEND_STATE];
}

// END PUBLIC
// PROTECTED ======================================================== PROTECTED

// END PUBLIC
