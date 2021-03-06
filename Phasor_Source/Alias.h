/* Phasor - Halo PC Server Extension
   Copyright (C) 2010-2011  Oxide (http://haloapps.wordpress.com)
  
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#pragma once

#include "Halo.h"

namespace alias
{
	// Called by the auxillary thread when its initializing
	void Setup();

	// Called by the auxillary thread when its terminating
	void Cleanup();

	// Called when a player joins, adds their alias data
	void OnPlayerJoin(halo::h_player* player);

	bool sv_alias(halo::h_player* exec, std::vector<std::string>& tokens);
	bool sv_alias_hash(halo::h_player* exec, std::vector<std::string>& tokens);
	bool sv_alias_search(halo::h_player* exec, std::vector<std::string>& tokens);
}