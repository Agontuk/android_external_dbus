/* -*- mode: C; c-file-style: "gnu" -*- */
/* dbus-message-factory.h Generator of valid and invalid message data for test suite
 *
 * Copyright (C) 2005 Red Hat Inc.
 *
 * Licensed under the Academic Free License version 2.1
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
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
 */

#ifndef DBUS_MESSAGE_FACTORY_H
#define DBUS_MESSAGE_FACTORY_H

#ifdef DBUS_BUILD_TESTS

#include <dbus/dbus-string.h>
#include <dbus/dbus-marshal-basic.h>
#include <dbus/dbus-marshal-validate.h>

DBUS_BEGIN_DECLS

typedef struct
{
  dbus_bool_t  validity_known;
  DBusValidity expected_validity;
  
  DBusString data;

} DBusMessageData;

typedef struct
{
  int generator;
  int sequence;
} DBusMessageDataIter;

void        _dbus_message_data_free              (DBusMessageData     *data);
void        _dbus_message_data_iter_init         (DBusMessageDataIter *iter);
dbus_bool_t _dbus_message_data_iter_get_and_next (DBusMessageDataIter *iter,
                                                  DBusMessageData     *data);


DBUS_END_DECLS

#endif /* DBUS_BUILD_TESTS */

#endif /* DBUS_MESSAGE_FACTORY_H */
