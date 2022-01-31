# arduino_ruche
Projet Arduino Étude de l’activité d’une ruche

1. Objectifs de l’activité : Découverte de la maquette microcontrôleur ARDUINO, de l’IDE et de la platine Bread Board pour l’implantation des composants. 
Durant cette phase du module électronique, nous travaillerons sur la fonctionnalité suivante du projet fil rouge : “Chaque passage allumera une LED pendant 200 ms”

Consignes : 
Faire clignoter la LED intégrée sur le PIN D13 de l’ARDUINO
Reporter l’état de la LED en temps réel sur la liaison série (Debug)
Faire clignoter une LED sur la PIN D4 de l’ARDUINO (Câblage LED + résistance)
Fixer le courant traversant la LED en fonction d’une valeur de Résistance

Nous utilisons la LED “HLMP-3301 -  LED, Rouge”, dont la documentation (datasheet) est fournie dans votre dossier de travail :
Retrouver avec la loi d’Ohm la valeur du courant traversant le circuit. Choisissez une valeur de luminosité (de courant traversant la LED) et calculer la valeur de la résistance à utiliser.
Allumer la LED en fonction de la valeur de la tension présente sur la PIN D6 (si D6 = 5V alors la LED est allumée, si D6 = 0V alors la LED est éteinte)

Pour aller plus loin : 
Donner la correspondance entre le code couleur des résistances, leurs valeurs et leurs précisions. Vérifier la cohérence des valeurs à l’ohmmètre.

Livrable : 
Un circuit correctement câblé et fonctionnel sur Bread Board, avec la bonne valeur de résistance. Le code associé à ce montage devra répondre au cahier des charges: “Chaque passage allumera une led pendant 200 ms”


Besoin matériel / logiciel :
Kit carte ARDUINO et composants associés


2. Objectifs de l’activité : Introduire des structures de contrôle dans le code. Mettre en évidence l’importance d’une résistance de pull-up ou pull-down dans le câblage d’un BP. Comprendre la notion de fréquence pour la génération de signal sonore.
Durant cette phase du module électronique, nous travaillerons sur la fonctionnalité du projet fil rouge correspondant à l’utilisation d’un Bouton Poussoir et du buzzer :
“Un BP (Bouton Poussoir) permettra de régler la fréquence de retentissement du buzzer. [ PIN D6 ] “

Consignes :  
Bouton Poussoir :
Allumer/Eteindre la LED en fonction de l’appui sur un BP présent sur la PIN D6 : BP appuyé alors LED allumée, BP relâchée alors LED éteinte.
Allumer/Eteindre la LED par appuis successifs sur un BP présent sur le PORT 6 : 1er appui, la LED s’allume, second appui, la LED s’éteint, etc...
Solutionner les (éventuels) problèmes des rebonds du Bouton Poussoir (solution logicielle ou solution matérielle)

Buzzer :
Pour l’utilisation du buzzer, dans un premier temps, vous NE DEVEZ PAS UTILISER les librairies “tone” de l’arduino. 
Générer une note LA sur le buzzer
Limiter le son afin qu’il soit suffisamment fort pour être audible mais suffisamment faible pour ne pas perturber toute l’assemblée. 

Pour aller plus loin :
Modifier la fréquence du buzzer à chaque appui du bouton poussoir (Do, Ré, Mi, Fa, Sol, La, Si)

Livrable : 
Une ou deux solutions aux problèmes des rebonds du bouton poussoir
Un buzzer qui sonne à faible intensité la note La
