// Fill out your copyright notice in the Description page of Project Settings.

#include "MainMenu.h"



bool UMainMenu::Initialize(){
 
     /*cmdHost = (UButton*) GetWidgetFromName(TEXT("cmdHost"));
     cmdHost->OnClicked.AddDynamic(this, &UMainMenu::hostServer);*/

    bool Success = Super::Initialize();
    if (!Success) return false;
    
    if (!ensure(cmdHost != nullptr)) return false;

	cmdHost->OnClicked.AddDynamic(this, &UMainMenu::hostServer);


	if (!ensure(cmdJoin != nullptr)) return false;
		
	cmdJoin->OnClicked.AddDynamic(this, &UMainMenu::joinServer);

    return true;

	
}

void UMainMenu::SetMenuInterface(IMenuInterface* MenuInterface)
{
    this->MenuInterface = MenuInterface;
}


void UMainMenu::hostServer(){

	

    if (MenuInterface != nullptr)
    {
        MenuInterface->Host();
    }

}


void UMainMenu::joinServer(){

	UE_LOG(LogTemp, Warning, TEXT("I m gonna join a server!!"));
}

