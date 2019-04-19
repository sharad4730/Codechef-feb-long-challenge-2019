# Codechef-feb-long-challenge-2019
  Problem statement 1 :)
     Appy and Chef are participating in a contest. There are N problems in this contest; each problem has a unique problem code between 1 and N inclusive. Appy and Chef decided to split the problems to solve between them ― Appy should solve the problems whose problem codes are divisible by A but not divisible by B, and Chef should solve the problems whose problem codes are divisible by B but not divisible by A (they decided to not solve the problems whose codes are divisible by both A and B

To win, it is necessary to solve at least K
problems. You have to tell Appy whether they are going to win or lose.

   Problem statement 2 :)
      Chef recently visited ShareChat Cafe and was highly impressed by the food. Being a food enthusiast, he decided to enquire about the ingredients of each dish.

There are N
dishes represented by strings S1,S2,…,SN. Each ingredient used for making dishes in ShareChat Cafe is represented by a lowercase English letter. For each valid i, the ingredients used to make dish i correspond to characters in the string Si

(note that ingredients may be used multiple times). A special ingredient is an ingredient which is present in each dish at least once.

Chef wants to know the number of special ingredients in ShareChat Cafe. Since Chef is too busy with work, can you help him?


     Problem statement 3 :)
     
     A battle is going to begin in the kingdom of Airland. There are N soldiers in the kingdom, numbered 1 through N and standing in a circle in such a way that for each valid i, the soldier directly to the right of the i-th soldier is soldier i+1, and the soldier directly to the right of the N-th soldier is soldier 1

Each soldier holds a sword and a shield. The sword is used to attack other soldiers and the shield is used to defend from attacks. Let's denote the attack value of the i
-th soldier's sword by ai and the defense value of the i-th soldier's shield by di

In the battle, each soldier picks one of the soldiers standing to his left and right, and attacks that soldier. The choices of the soldiers are completely independent, so each soldier can be attacked by the soldier to his left, by the soldier to his right (the power of such an attack is the attack value of the attacking soldier's sword), by both of them (then, the power of the resulting attack is the sum of the attack values of these soldiers' swords) or by nobody. A soldier remains alive if the defense value of his shield is strictly greater than the power with which he is attacked. Everyone attacks simultaneously and there is only one round of attacks. Each soldier that remains alive at the end is awarded a laurel.

The king of Airland likes these fights, so the host of the battle promised the king that he can pick one soldier and if the soldier he picks survives the battle, the king receives the shield of that soldier.

Chef is the deputy of the king and you want to help him pick a soldier for the king in such a way that the king receives the best shield (with the greatest defense value). However, if Chef picks a soldier and that soldier does not survive, Chef will be thrown in a snake pit. Therefore, it should be guaranteed that the chosen soldier will survive regardless of the decisions of the other soldiers.

Can you help Chef make the best choice and tell him the defense value of the shield which the king gets, or decide that he can be thrown in the snake pit no matter which soldier he picks?


        Problem statement 4 :)
        
        Chef decided to teach some advanced recipes to junior chefs. On the very first day of their cooking sessions, to identify the cooking abilities of each junior chef, Chef instructed them to make their premier dishes. The junior chefs were very excited and they all went into the kitchen to cook their dishes.

Chef has a limited number of jars in the kitchen. The jars are magical ― if a chef that is cooking a dish requiring x
ingredients takes x jars, each of these jars fills itself with one of the required ingredients, and after this chef finishes cooking and returns the jars to the kitchen, they empty themselves (and are ready for other chefs to take some or all of them). Of course, this means it is impossible to cook a dish requiring x ingredients with less than x

jars.

Since Chef did not tell the junior chefs in which order they should prepare their dishes, they started picking up jars simultaneously and in the end, no junior chef was able to acquire enough jars to prepare their premier dish. Also, none of the junior chefs are willing to lend their jars to others. Chef was unable to handle the situation and decided to call off the cooking session for that day, so that he could get more jars and try it again later.

You know that there are N
junior chefs (numbered 1 through N) and for each valid i, the number of ingredients required for the dish of the i-th chef is Ai. If there are J

jars, then formally, the following process happens:

    The junior chefs take some jars; let's denote the number of jars taken by the i

-th chef by ai. Any distribution of jars such that 0≤ai for each valid i and ∑Ni=1ai=J
is possible.
At any time, if ai<Ai
for each chef i

    that has not prepared their dish yet, the cooking session is a failure.
    Otherwise, one of the chefs who have at least as many jars as the number of required ingredients prepares their dish and returns their jars to the kitchen.
    Whenever some jars are returned to the kitchen, they are immediately taken by some chefs that have not prepared their dishes yet (possibly all the jars by one chef).
    This process continues with chefs taking jars, cooking their dishes and returning jars, until no chef can cook their dish anymore or all chefs have cooked their dishes.
    When all junior chefs have successfully cooked their dishes, the cooking session ends successfully.

Chef wants to know the minimum number of magical jars that should be present in the kitchen initially so that the session would be successful regardless of how the junior chefs pick up the jars. Chef is a legendary cook, but he is not very good at mathematics, so he asks you to find that number.
