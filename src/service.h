/*
 * Copyright 2014 Canonical Ltd.
 * Copyright 2023 Robert Tari
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *   Charles Kerr <charles.kerr@canonical.com>
 *   Robert Tari <robert@tari.in>
 */

#ifndef INDICATOR_DISPLAY_SERVICE_H
#define INDICATOR_DISPLAY_SERVICE_H

#include <src/indicator.h>

#include <memory> // std::unique_ptr

class DisplayIndicator: public Indicator
{
public:
  DisplayIndicator();
  ~DisplayIndicator() override;

  const char* name() const override;
  GSimpleActionGroup* action_group() const override;
  std::vector<std::shared_ptr<Profile>> profiles() const override;

protected:
  class Impl;
  std::unique_ptr<Impl> impl;
};

#endif
