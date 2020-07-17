#pragma once
#include <SettingsMenu.h>
#include <Singleton.h>

namespace GW2Radial
{

class MiscTab : public SettingsMenu::Implementer, public Singleton<MiscTab>
{
	ConfigurationOption<bool> reloadOnFocus_;

public:
	MiscTab();
	~MiscTab();

	const char * GetTabName() const override { return "Misc"; }
	void DrawMenu() override;

	bool reloadOnFocus() const { return reloadOnFocus_.value(); }
};

}