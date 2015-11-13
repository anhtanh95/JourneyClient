/////////////////////////////////////////////////////////////////////////////
// This file is part of the Journey MMORPG client                           //
// Copyright � 2015 Daniel Allendorf                                        //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////
#pragma once
#include "IO\Element.h"

namespace IO
{
	class UILoginwait : public UIElement
	{
	public:
		UILoginwait();
		void buttonpressed(uint16_t) override {}
	};

	class ElementLoginwait : public Element
	{
	public:
		ElementLoginwait(){}

		bool isfocused() const override
		{
			return true;
		}

		UIType type() const override
		{
			return UI_LOGINWAIT;
		}

		UIElement* instantiate() const override
		{
			return new UILoginwait();
		}
	};
}
