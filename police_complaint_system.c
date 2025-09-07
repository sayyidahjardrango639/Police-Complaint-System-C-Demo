#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[50];
    int incidenttype,when,where,safe;
    int arrivaltime;
    
    srand(time(0));
    
    printf("🚨 Welcome to Police Complaint System 🚨 \n");
    
    printf("**************************************\n");
    
    printf("Please enter your name (optional, press Enter to skip):");
    fgets(name,sizeof(name),stdin);
    
    printf("Select incident type Sir/ Madam 👮️:\n");
    printf("1. Robbery 💰\n");
    printf("2. Domestic Violence 💢\n");
    printf("3. Accident 🤕\n");
    printf("4. Other Crime 🕵️\n");
    printf("Enter your select:");
    scanf("%d",&incidenttype);
    
    printf("When did this happen? Sir/ Madam 👮\n");
    printf("1. Home 🏡\n");
    printf("2. Street 🛣\n");
    printf("3. City 🌆\n");
    printf("4. Village 🏞\n");
    printf("Enter your select:");
    scanf("%d",&where);
    
    printf("Are you safe right now? Sir/ Madam 👮\n");
    printf("1. Yes, I am safe 🙂\n");
    printf("2. No, I am in danger 😨\n");
    printf("Enter your select:");
    scanf("%d",&safe);
    
    if(safe == 2 || when == 1)
    { arrivaltime = 5 + rand() %6;
    printf(" ⚠ Urgency: HIGH\n");}
    else{ arrivaltime = 15 + rand() %16;
    printf(" ℹ Urgency: MEDIUM\n");}
    
    printf("Complaint successfully registered ✅\n");
    printf(" 👮 Police have been notified.\n");
    printf("🚔 Nearest patrol expected in %d minutes.\n", arrivaltime);
    printf("💬 Message: Don't worry,Sir/Madam help is on the way, Stay calm and safe.😊\n");
    
    
    
    
    
    return 0;
}
