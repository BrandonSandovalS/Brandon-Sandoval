/*
 * project.c
 *
 *  Created on: November 06, 2020
 *      Author: Brandon
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char name[100];
int gender, friend, chance, end, choose;


int rando() {
	return rand() % 100;
}

int main() {
	// This sets up the randomness of the encounters you get.
	time_t t;
	srand((unsigned) time(&t));
	while (1 == 1)
	{
		printf("This will be a traveling simulator for what you might experience as an immigrant going to the United States. \n");
		printf("\nWhat is your name?");
		setbuf(stdout, NULL);
		scanf(" %[^\n]s", name);
		printf("\nWhat is your gender? \n");
		while (1 == 1)
		{
			printf("Please Enter 1 for female, enter 2 for male");
			scanf(" %d", &gender);
			if (gender == 1 || gender == 2)
			{
				break;
			}
		}
		printf("\nHello %s. \nLet us set up your story. \n\n\n", name);
		printf("Part 1: Introduction \n");
		printf("You were born in a small city in Honduras, Orica.\nYou have a smaller brother and a mother and father.");
		printf("\nYou and your family are very improvished and you decided to go to America to help your family.");
		printf("\nWith the support of your family members you got fifty dollars and a small bag with clothes and food.");
		printf("\nYou start off your voyage with the knowledge of going to the railroad system because it would be the fastest but very dangerous.");

		printf("\n\n\nPart 2: Voyage");
		printf("\nAs you arrive you notice a group of boys that seem barely older than you in front of you.");
		printf("\nWould you like to interact with them or not?");
		while(1 == 1)
		{
			printf("Enter: 1 for yes, 2 for no");
			scanf( "%d", &friend);
			if(friend == 1 || friend == 2)
			{
				break;
			}
		}
		if(friend == 1)
		{
			printf("You decide to talk to them.\n");
			printf("They seem to be surprised by your demeanor.\n");
			printf("\nNonetheless they introduce themselves as Pablo, Chris, and Estaban");
			printf("\nYou give them your name, and it turns out they are on the same voyage as you");
			printf("\nAs you all talk they bring up how they are all orphans from a neighbor city of yours and grew up like brothers.");
			printf("\nThey all have the American Dream of having success and living in good health.");
			printf("\nThey bring up if you would like to accompany them on the voyage to cross the border.");
			while(1 == 1)
			{
				printf("Enter: 1 for yes, 2 for no");
				scanf( "%d", &friend);
				if(friend == 1 || friend == 2)
				{
					break;
				}
			}
			if(friend == 1)
			{
				printf("\n You said yes. They seem very exciting they made a new friend which is you, %s", name);
			}
			else
			{
				printf("\nThey seem deeply disappointed with your answer and start to stay quiet.");
				printf("\nYou get uncomfortable with their quietness and just slowly stray afar.");
			}

		}
		else
		{
			printf("\nYou decide to stay away from them and just stay behind them from a distance");
		}

		printf("\n\nYou've arrived at the location where the train will take you into Mexico.");

		//Side 1
		if(friend == 1)
		{
			printf("\nWe were all walking and talking when Pablo said that we needed to jump on the train when he said so.");
			printf("\nThe time has come and you see the train come closer and closer you all are getting ready to jump");
			printf("\nThen you hear JUMP and you all do it perfectly.");
			printf("\nYou all decide to rest and sleep for the night on the train.");
			printf("\nIn no time at all you all awake from noises.");
			printf("\nYou are all being ROBBED!!!!");
			printf("\nThey have weapons.");
			printf("\nThe three brothers charge at the robbers but what do you do?");
			while(1 == 1)
			{
				printf("Enter: 1 to fight, 2 to watch");
				scanf(" %d", &choose);
				if(choose == 1 || choose == 2)
				{
					break;
				}
			}
			if(chance == 2)
			{
				printf("\nSince you just watched they got incapacitated and then they were after you.");
				printf("\nThere was no where to go and you decided to jump.");
				printf("\nYou are severely injured.");
				printf("\nYOU LOST\nDo you want to play again?");
				while(1 == 1)
				{
					printf("Enter: 1 for yes, 2 for no");
					scanf(" %d", &end);
					if(end == 1 || end == 2)
					{
						break;
					}
				}
				if(end == 2)
				{
					break;
				}
				else
				{
					printf("\n\n\n\n");
					continue;
				}
			}
			else
			{
				printf("\nYou went towards and pushed them off the train with all your might.");
				printf("\nThey thought you were asleep and they jumped off the train to their doom.");
				printf("\nAll the brothers seemed frightened but relieved that everything was ok.");
				printf("\nFew hours passed then they said that they had a driver who can take them to the border.");
				printf("\nYou astonished questioned it.");
				printf("\nThe brothers thrown off angerly responded if you do not trust us.");
				while(1 == 1)
				{
					printf("Enter: 1 if you trust them, 2 if you do not trust them");
					scanf(" %d", &choose);
					if(choose == 1 || choose == 2)
					{
						break;
					}
				}
				if(choose == 1)
				{
					printf("\nSince you told them you trusted them Pablo said, 'Ok well we well leave the train in 10 minutes and you will follow us.'");
					printf("\nYou agree. \n\n\n");
					printf("\nAs time passes he gives you a heads up they are jumping.");
					printf("\nYou all jump safely and continue to walk.\n In twenty minutes you see the car.");
					printf("\nYou and the brothers get in a van with barely enough room and go up north.");
					printf("\nHours has passed and you have arrived the border.");
					printf("\nThe brothers only way of crossing the border is through the river.");
					printf("\nYou have to cross. \nThey set up everything.");
					chance = rand();
					if(chance < 10)
					{
						printf("\nAs you are crossing the river with the brothers each holding eachothers shirts");
						printf("\nyou lose your grip. You get SWEPT AWAY and succumb to the strength of the river.");
						printf("\n\n\nGame Over\nYou  got injured");
						printf("\nDo you want to play again?");
						while(1 == 1)
						{
							printf("Enter: 1 for yes, 2 for no");
							scanf(" %d", &end);
							if(end == 1 || end == 2)
							{
								break;
							}
						}
						if(end == 2)
						{
							break;
						}
						else
						{
							printf("\n\n\n\n");
											continue;
										}
					}
				}

			}
		}


		//Side 2
		else
		{
			printf("\nYou were walking and hear a train coming and you look behind you and see people jumping on the train behind you.");
			printf("\nYou see them jumping in a certain interval and then you know you have to do the same.");
			printf("\nYou are preparing mentally for the train to come then you go.");
			chance = rand();
			if(chance < 20)
			{
				printf("\nYou tried to get on the train a bit too early and as a result missed grabbing the railing on the train.");
				printf("\nAs a result, you misplaced your foot and the train grabbed your leg.");
				printf("\n\n\nGame Over\nYou  got injured");
				printf("\nDo you want to play again?");
				while(1 == 1)
				{
					printf("Enter: 1 for yes, 2 for no");
					scanf(" %d", &end);
					if(end == 1 || end == 2)
					{
						break;
					}
				}
				if(end == 2)
				{
					break;
				}
				else
				{
					printf("\n\n\n\n");
					continue;
				}
			}
			printf("\nYou jumped on the train perfectly!!!!!");
			printf("\nNow that you made it on the train you go up on the train.");
			printf("\nAs you got up you see another man on the other side sleeping.");
			printf("\nDo you want to wake him up?");
			while (1 == 1)
			{
				printf("Please Enter 1 for yes, enter 2 for no");
				scanf(" %d", &chance);
				if (chance == 1 || chance == 2)
				{
					break;
				}
			}
			//Fail
			if(chance == 1)
			{
				printf("\nAs you go up to him to wake him up he is startled and gets up quickly.");
				printf("\nIn a matter of seconds he gets confused and trips.");
				printf("\nAs a result he accidently feel off the train and TOOK YOU DOWN WITH HIM!");
				printf("\nYou are severely injured.");
				printf("\nYOU LOST\nDo you want to play again?");
						while(1 == 1)
						{
							printf("Enter: 1 for yes, 2 for no");
							scanf(" %d", &end);
							if(end == 1 || end == 2)
							{
								break;
							}
						}
						if(end == 2)
						{
							break;
						}
						else
						{
							printf("\n\n\n\n");
							continue;
						}
			}
			else
			{
				printf("\nAs time passes you see poeple leaving the train.");
				printf("\nYou then notice you see people leaving faster and faster \nDo you want to get off the train?");
				while (1 == 1)
				{
					printf("Please Enter 1 for yes, enter 2 for no");
					scanf(" %d", &chance);
					if (chance == 1 || chance == 2)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				if(chance == 2)
				{
					printf("\nYou decided to stay and as a result you are closing into Mexico.");
					printf("\nThen you see police men looking at the train.");
					printf("\nYou know this is not a good thing, as they get closer and closer you have a bad feeling.");
					printf("\nThey see you and you are struck with fear they tell you to get out.");
					printf("\nYou are sent back to where you are from.");
					printf("\nnYOU LOST.\nDo you want to play again? ");
					while (1 == 1)
						{
							printf("\nPlease Enter 1 for yes, enter 2 for no");
							scanf(" %d", &chance);
							if (chance == 1 || chance == 2)
							{
								break;
							}
							else
							{
								continue;
							}
						}
				}
				else
				{
					printf("\nAs a result you ended up going around the checkpoint of the policemen");
					printf("\nYou are now in Mexico.\nYour hunger grows and you are running low on food.");
					printf("\nDo you want to go to ask people for food?");
					while (1 == 1)
					{
						printf("\nPlease Enter 1 for yes, enter 2 for no");
						scanf(" %d", &chance);
						if (chance == 1 || chance == 2)
						{
							break;
						}
							else
						{
							continue;
						}
					}
					if(chance == 1)
					{
						printf("\nYou decide to go ask for food by the locals.");
						printf("\nThe first house you go to and ask they said sure and made you wait outside.");
						printf("\nNo longer than 5 minutes waiting the police came and are asking you questions.");
						printf("\nThey know you are illegal and deport you back, they called the border patrol on you.");
						printf("\nYOU LOST.\nDo you want to play again? ");
						while (1 == 1)
						{
							printf("\nPlease Enter 1 for yes, enter 2 for no");
							scanf(" %d", &chance);
							if (chance == 1 || chance == 2)
							{
								break;
							}
							else
							{
								continue;
							}
						}
					}
					else
					{
						printf("\nYou decided to continue walking and waiting for another train to take you to the US.");
						printf("\nA while passed and you hear the train.");
						chance = rand();
						if(chance < 20)
						{
							printf("\nYou tried to get on the train a bit too early and as a result missed grabbing the railing on the train.");
							printf("\nAs a result, you misplaced your foot and the train grabbed your leg.");
							printf("\n\n\nGame Over\nYou  got injured");
							printf("\nDo you want to play again?");
							while(1 == 1)
							{
								printf("Enter: 1 for yes, 2 for no");
								scanf(" %d", &end);
								if(end == 1 || end == 2)
								{
									break;
								}
							}
							if(end == 2)
							{
								break;
							}
							else
							{
								printf("\n\n\n\n");
								continue;
							}
						}
						printf("\nYou are now on the train leaving.\nYour hunger is low and you want food.");
						printf("\nAs you are looking at the passing landscape you pass by houses and ahead of you people are throwing bags.");
						printf("\nThey were throwing bags of food to all the immigrants on the train.");
						printf("\nYou wait and you try to grab the food.\nSUCCESS. YOU ARE NO LONGER HUNGRY ... for now");
						printf("\nYou know another checkpoint is near and you have to get off.");
						printf("\nOnce again you do it perfectly in getting off.");
						printf("\nYou are tired and decide to rest up.\nYou are awaken to rustling.");
						printf("\nYou wake up and someone has taken all your money do you fight or run?");
						while (1 == 1)
						{
							printf("\nPlease Enter 1 to fight, enter 2 to run");
							scanf(" %d", &chance);
							if (chance == 1 || chance == 2)
							{
								break;
							}
							else
							{
								continue;
							}
						}

						if(chance == 1)
						{
							printf("\nThe thief had a wrench in his back and used it as a weapon.");
							if(gender == 1)
							{
								printf("You were severely injured and sexually assaulted");
							}
							else
							{
								printf("You were severely injured.");
							}
							printf("\n\n\nGame Over\nYou  got injured");
							printf("\nDo you want to play again?");
							while(1 == 1)
							{
								printf("Enter: 1 for yes, 2 for no");
								scanf(" %d", &end);
								if(end == 1 || end == 2)
								{
									break;
								}
							}
							if(end == 2)
							{
								break;
							}
							else
							{
								printf("\n\n\n\n");
								continue;
							}
						}
						else
						{
							printf("\nYou continue running forward north. Until you think you are safe.");
							printf("\nYou continue going forward until you see the train.");
							printf("\nYou get on the train perfectly and it takes you to the border.");
							printf("\nNow that you have come so close to the border you realise you have to cross the Rio Grande.");
							printf("\nYou have no money and no ways in communicating with your family members to send you money.");
							printf("\nDo you want to cross the river even though you might drown?");
							while (1 == 1)
							{
								printf("\nPlease Enter 1 to cross the river, or enter 2 to not cross");
								scanf(" %d", &chance);
								if (chance == 1 || chance == 2)
								{
									break;
								}
								else
								{
									continue;
								}
							}
							if(chance == 1)
							{
							chance = rand();
							if(chance < 10)
							{
								printf("\nYou began swimming and swimming to get to the other side.");
								printf("\nYou got tired and tired until ... \nYou could not handle the current ...");
								printf("\n\n\nGame Over\nYou drown");
								printf("\nDo you want to play again?");
								while(1 == 1)
								{
									printf("Enter: 1 for yes, 2 for no");
									scanf(" %d", &end);
									if(end == 1 || end == 2)
									{
										break;
									}
								}
								if(end == 2)
								{
									break;
								}
								else
								{
									printf("\n\n\n\n");
									continue;
								}
							}
							else
							{
								printf("\nYou decided to just look at the river. The only thing stopping you and decided to not cross.");
								printf("\nWhile looking at the river the border patrol noticed you and started questioning you.");
								printf("\nAfter learning everything they took you back.");
								printf("\n\n\nGame Over\nYou drown");
								printf("\nDo you want to play again?");
								while(1 == 1)
								{
									printf("Enter: 1 for yes, 2 for no");
									scanf(" %d", &end);
									if(end == 1 || end == 2)
									{
										break;
									}
								}
								if(end == 2)
								{
									break;
								}
								else
								{
									printf("\n\n\n\n");
									continue;
								}
							}

						}
						}


			}


		}


		printf("\n\n\nYou MADE IT!!!!!\nDo you want to play again?");
		while(1 == 1)
		{
			printf("Enter: 1 for yes, 2 for no");
			scanf(" %d", &end);
			if(end == 1 || end == 2)
			{
				break;
			}
		}
		if(end == 2)
		{
			break;
		}
		else
		{
			printf("\n\n\n\n");
			continue;
		}
}


