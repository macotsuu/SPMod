/*
 *  Copyright (C) 2018 SPMod Development Team
 *
 *  This file is part of SPMod.
 *
 *  SPMod is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "ext.hpp"

namespace SPSqliteModule
{
    class SqliteHandler : public SPMod::ISqliteHandler
    {
        public:
            explicit SqliteHandler(sqlite3* handle);

            void query(const char* sql) override;

            sqlite3* getHandle()
            {
                return m_handle;
            };
        private:
            sqlite3* m_handle;

    };
}