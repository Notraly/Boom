//
//  State.hpp
//
//  Created by Coralie on 27/02/2018.
//
//

#ifndef State_h
#define State_h

class State;
class InitState;
class WaitFriendState;

// ---------------------------------------------------------------------- const

enum StateName {INIT_STATE, WAIT_FRIEND_STATE, STATE_NAME_COUNT};//STATE_NAME_COUNT il ne doit pas être utilisé
//                  =0            =1                 =2...

// ==================================================================== INCLUDE

#include <stdio.h>
#include "StateController.h"

// --------------------------------------------------------------------- Struct


class State {
protected: //======================================================== PROTECTED
  // -------------------------------------------------------------------- const
  // --------------------------------------------------------------- attributes
  StateName name;
  StateController* controller = nullptr;
  // ----------------------------------------------------------------- methodes
  // END PROTECTED
public: //============================================================== PUBLIC
  // -------------------------------------------------------------- Constuctors
  State(StateName name, StateController* controller);
  // ----------------------------------------------------------------- Methodes
  virtual void sLoop() = 0;
  // ------------------------------------------------------- Getteurs/Sertteurs
  StateName getName();
  // ---------------------------------------------------------------- Destuctor
  virtual ~State();
  // END PUBLIC


};

class InitState : public State {
private: //============================================================ PRIVATE
  // -------------------------------------------------------------------- const
  // --------------------------------------------------------------- attributes
  // ----------------------------------------------------------------- methodes
  // END PRIVATE
public: //============================================================== PUBLIC
  // -------------------------------------------------------------- Constuctors
  InitState(StateController* controller);
  // ----------------------------------------------------------------- Methodes
  virtual void sLoop();
  // ------------------------------------------------------- Getteurs/Sertteurs
  // ---------------------------------------------------------------- Destuctor
  virtual ~InitState();
  // END PUBLIC
protected: //======================================================== PROTECTED

};

class WaitFriendState : public State {
private: //============================================================ PRIVATE
  // -------------------------------------------------------------------- const
  // --------------------------------------------------------------- attributes
  // ----------------------------------------------------------------- methodes
  // END PRIVATE
public: //============================================================== PUBLIC
  // -------------------------------------------------------------- Constuctors
  WaitFriendState(StateController* controller);
  // ----------------------------------------------------------------- Methodes
  virtual void sLoop();
  // ------------------------------------------------------- Getteurs/Sertteurs
  // ---------------------------------------------------------------- Destuctor
  virtual ~WaitFriendState();
  // END PUBLIC
protected: //======================================================== PROTECTED

};

#endif /* State_h */
