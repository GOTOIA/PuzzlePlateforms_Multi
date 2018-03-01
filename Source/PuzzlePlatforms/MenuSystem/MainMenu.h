// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Button.h"
#include "MenuInterface.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()


private:
		UPROPERTY(meta = (BindWidget))
		UButton *cmdHost=nullptr;

		UPROPERTY(meta = (BindWidget))
		UButton *cmdJoin=nullptr;
	
		UFUNCTION()
		void hostServer();

		UFUNCTION()
		void joinServer();

		IMenuInterface *MenuInterface;


protected :
		virtual bool Initialize();


public :

	    void SetMenuInterface(IMenuInterface* MenuInterface);
	
};
