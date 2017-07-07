<p align="center">
       <a href="https://discord.gg/m22qQwG">
        <img src="https://img.shields.io/badge/Discord-Join%20chat%20→-738bd7.svg" alt="Join the chat at https://discord.gg/m22qQwG">
    </a>
</p>

DGAus Current To-Do list
=============

* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 

Getting Started Guide. For Any Future Developers <3 Rogue
=============
PBO Manager: http://www.armaholic.com/page.php?id=16369

Setting up a local dedicated server on your PC for testing.
  
  Video Guide: https://www.youtube.com/watch?v=TrGQ4B2ikR4
  Programs used:
     
      Server Launcher: http://www.armaholic.com/page.php?id=11655
        This program makes it alot easier to set your launch settings and saves you editing text files for days. 
      
      !!!!!!!!!!!!USE EXTDB2!!!!!!!!!!!!extdb: https://github.com/Torndeco/extdb
        Clone this repo and use under windows_release 14 debug logging (this is a test server so you want debug logging)
      
      Altis-life: https://github.com/AsYetUntitled/Framework/releases - This is the most recent official release, however we use streamlines version.
        You want to use the extdb folder pbos (use the default life pbos to verify it all works before switching to our pbos).
        It also has the script to setup the database, if you follow the youtube guide.
      
      xampp: https://www.apachefriends.org/index.html
        Up to you if you want to use, its purpose is to run the mysql server and give you access to phpmyadmin to edit the
        database. Install apache and mysql and start both before trying to click on admin for mysql and it will work (because in the video he couldnt get it working)
      
      MySQL Editor: I prefer mysql workbench use whatever sql editor you like. http://www.mysql.com/products/workbench/ 
        Use your brain I shouldnt need to explain this.
      
      steamcmd: http://media.steampowered.com/installer/steamcmd.zip
        Use this to download arma server files as per the video guide. 
  
  Dont forget to port forward the steam port UDP on your router/modem and that your PC's local firewall isnt being a cunt, so other people can connect to it.
  "i had mad issues with it just not working after i set it up and installed everything and it magically unshat itself when I reset my PC and just worked." - quote from a dev

WorkFlow Guide:
=============
Whenever you have a new feature/issue you want to work on, make a new branch and name it after whatever it is you're doing. 
The ideal way to do this would be to submit an issue on github with the details of your task/problem, make a new branch and name it after the issue number if we get a lot of branches. 
Make sure all your changes on that branch are committed as often as possible, it doesn't matter how often you commit it comes in handy if you ever need to roll back a small part of what you've completed.

When you have completed the new feature/fix or you're done working on it push/sync it to the server, someone else can always pick up where you left off, that's the beauty of Github.
This allows you to not have to focus on one thing and you can switch between multiple fixes. If plan to do this make sure your commit messages are meaningful so someone else can see what you
were trying to fix and how. 

Alright so you've added this cool feature or fixed the problem so now what? You create a pull request between the "Master" and your "Local" branch. 
Please avoid fucking auto merging them the idea behind this is that all of us can review the changes and look for any errors or issues, and allows us to all run your branch on our own local servers 
to test that it's not broken. If a lot of people agree then it's good to go, I would prefer at least 1-2 other people, so merge it to the "Master".

So now we have this "Master" build that's getting these pushes from all different things, but how dow we know when it's ready to go onto the server?
Well when we look at it, the "Master" is our current stable build, someone will need to make a pull request to merge the "Master" in to the "Production" branch.
Once again we need to carry out a few tests on the "Master" branch and if at least 2 people agree that the "Master" is stable and good to go we can merge it through.
The "Production" branch is the branch that we make pbo's from to put on the live server.

Why this extra step I hear you ask? Well you don't have to scratch your head and think back to which version was the last stable branch in case we fuck up and the live server breaks.
You can just very quickly roll back the "Production" branch and make a new pbo so you can tell all the crying cunts in teamspeak to shut the fuck up because you got this and fix it within minutes.
This also means you no longer need to keep every old version of the pbo's on the server and can just delete them as they are easily retrievable from github.