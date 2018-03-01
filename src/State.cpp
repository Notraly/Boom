//
//  State.cpp
//
//  Created by Coralie on 27/02/2018.
//
//

#include "State.h"

// PRIVATE ============================================================ PRIVATE
// ------------------------------------------------------------------- methodes

// END PRIVATE
// PUBLIC ============================================================== PUBLIC
// ---------------------------------------------------------------- Constuctors
State::State(StateName name, StateController* controller){}
InitState::InitState(StateController* controller):State(INIT_STATE, controller){}
WaitFriendState::WaitFriendState(StateController* controller):State(WAIT_FRIEND_STATE, controller){}
// ------------------------------------------------------------------- Methodes
void InitState::sLoop(){
  
}
void WaitFriendState::sLoop(){

}
// --------------------------------------------------------- Getteurs/Sertteurs
StateName State::getName(){
  return name;
}
// ------------------------------------------------------------------ Destuctor
State::~State() {}
InitState::~InitState(){}
WaitFriendState::~WaitFriendState(){}
// END PUBLIC
// PROTECTED ======================================================== PROTECTED

// END PUBLIC
