#ifndef CLIENTMESSAGES_H
#define CLIENTMESSAGES_H

#ifdef _WIN32
#pragma once
#endif

#include <networksystem/inetworkmessages.h>

#include "clientmessages.pb.h"

class CClientMsg_ClientUIEvent_t : public CNetMessagePBTyped<CM_ClientUIEvent, CClientMsg_ClientUIEvent, SG_CLIENTMSG, BUF_RELIABLE, true> {};

#endif // CLIENTMESSAGES_H
