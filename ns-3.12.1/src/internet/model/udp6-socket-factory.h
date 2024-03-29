/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * UDP6 Implementation
 *
 * Copyright (c) 2010 KUT, ETRI
 * (Korea Univerity of Technology and Education)
 * (Electronics and Telecommunications Research Institute)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Hyon-Young Choi <commani@gmail.com>
 */
 
#ifndef UDP6_SOCKET_FACTORY_H
#define UDP6_SOCKET_FACTORY_H

#include "ns3/socket-factory.h"

namespace ns3 {

class Socket;

/**
 * \ingroup socket
 *
 * \brief API to create UDPv6 socket instances 
 *
 * This abstract class defines the API for UDPv6 socket factory.
 * All UDPv6 implementations must provide an implementation of CreateSocket
 * below.
 * 
 * \see UdpSocketFactoryImpl
 */
class Udp6SocketFactory : public SocketFactory
{
public:
  static TypeId GetTypeId (void);

};

} // namespace ns3

#endif /* UDP6_SOCKET_FACTORY_H */
