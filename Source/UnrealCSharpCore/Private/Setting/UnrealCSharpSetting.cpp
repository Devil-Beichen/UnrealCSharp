#include "Setting/UnrealCSharpSetting.h"
#if WITH_EDITOR
#include "ISettingsModule.h"
#endif

#define LOCTEXT_NAMESPACE "FUnrealCSharpSettings"

#if WITH_EDITOR
void UUnrealCSharpSetting::RegisterSettings()
{
	if (const auto SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project",
		                                 "Plugins",
		                                 "UnrealCSharpSettings",
		                                 LOCTEXT("UnrealCSharpSettingsName",
		                                         "UnrealCSharp Setting"),
		                                 LOCTEXT("UnrealCSharpSettingsDescription",
		                                         "UnrealCSharp Setting"),
		                                 GetMutableDefault<UUnrealCSharpSetting>());
	}
}

void UUnrealCSharpSetting::UnregisterSettings()
{
	if (const auto SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project",
		                                   "Plugins",
		                                   "UnrealCSharpSettings");
	}
}
#endif

const TArray<FBindClass>& UUnrealCSharpSetting::GetBindClass() const
{
	return BindClass;
}

bool UUnrealCSharpSetting::IsEnableDebug() const
{
	return bEnableDebug;
}

const FString& UUnrealCSharpSetting::GetHost() const
{
	return Host;
}

int32 UUnrealCSharpSetting::GetPort() const
{
	return Port;
}

#undef LOCTEXT_NAMESPACE
