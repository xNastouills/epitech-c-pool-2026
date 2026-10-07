# 🏊 Piscine Epitech — C

Ce dépôt regroupe mon travail de la **piscine Epitech** : un mois d'immersion en programmation C et en environnement Linux.

![Langage](https://img.shields.io/badge/langage-C-00599C?logo=c&logoColor=white)
![Environnement](https://img.shields.io/badge/env-Linux-FCC624?logo=linux&logoColor=black)
![Ecole](https://img.shields.io/badge/école-Epitech-0A2A6B)

---

## 📖 C'est quoi la piscine ?

La piscine est la période de sélection et d'initiation d'Epitech. Pendant plusieurs semaines, on est plongé dans le langage C et dans l'environnement Unix, avec un principe simple :

- **Un sujet par jour**, composé de plusieurs exercices à rendre avant la deadline.
- **Correction automatique** : le code doit compiler, respecter la norme (coding style) et passer des tests.
- **Pas de cours magistral** : on apprend en cherchant, en se trompant et en s'entraidant.
- **Des rushes** : des mini-projets en équipe sur un temps très court.
- Une fin de piscine consacrée à la découverte de la **bibliothèque graphique (CSFML)**.

L'objectif n'est pas d'avoir 100 % tous les jours, mais d'apprendre à **chercher, comprendre et persévérer**.

---

## 📊 Résultats

| Jour | Exercices réussis | Score |
| :--- | :---: | :---: |
| Jour 01 | 7 / 8 | 88 % |
| Jour 02 | — | **100 %** |
| Jour 03 | 8 / 9 | 89 % |
| Jour 04 | 5 / 6 | 83 % |
| Rush 01 | — | **100 %** |
| Rush 02 | — | **100 %** |
| `count_island` | — | **100 %** |
| `Star` | — | **100 %** |
| Jour 05 | 7 / 8 | 88 % |
| Jour 06 | 7 / 21 | 33 % |
| Jour 07 | 5 / 6 | 83 % |
| Jour 08 | 4 / 5 | 80 % |
| Jour 09 | 3 / 6 | 50 % |
| Jour 10 | 1 / 5 | 20 % |
| Jour 11 | 7 / 11 | 64 % |
| Jour 12 | 2 / 4 | 50 % |
| Jour 13 | *Corrections manuelles, découverte de la lib graphique* | — |

---

## 🧠 Notions découvertes

### Jours 01 – 02 · Linux, Shell et Git
- Navigation et manipulation de fichiers en ligne de commande (`ls`, `cd`, `cp`, `mv`, `rm`, `man`)
- Droits sur les fichiers, redirections et pipes
- Outils de traitement de texte (`grep`, `find`, `cut`, `sed`, `wc`)
- Premiers scripts shell
- Bases de **Git** (`add`, `commit`, `push`)

### Jour 03 · Premiers pas en C
- Structure d'un programme, fonction `main`
- Affichage avec `write` (`my_putchar`)
- Conditions et boucles
- Affichage de nombres (`my_put_nbr`)

### Jour 04 · Pointeurs
- Adresses mémoire et pointeurs
- Passage par adresse (`my_swap`)
- Parcours de chaînes et de tableaux (`my_putstr`, `my_strlen`, `my_sort_int_tab`)

### Rushes, `count_island` et `Star`
- Travail en équipe et répartition des tâches
- Algorithmique sur des grilles et des formes
- Affichage et boucles imbriquées

### Jour 05 · Récursivité
- Fonctions récursives et cas d'arrêt
- Factorielle, puissance, racine carrée, nombres premiers

### Jour 06 · Chaînes de caractères
- Réimplémentation des fonctions de `<string.h>` (`my_strcpy`, `my_strcmp`, `my_strcat`, `my_strstr`…)
- Manipulation et transformation de chaînes

### Jour 07 · Compilation et bibliothèque
- Compilation avec `gcc` et ses flags
- **Makefile**
- Fichiers d'en-tête (`.h`) et création de ma propre bibliothèque `libmy`

### Jour 08 · Mémoire dynamique
- `malloc` / `free`
- Duplication et découpage de chaînes (`my_strdup`, tableau de mots)
- Gestion des arguments `argc` / `argv`

### Jours 09 – 10 – 11 – 12 · Structures de données et projets avancés
- Structures (`struct`) et types personnalisés
- Listes chaînées
- Lecture et écriture de fichiers
- Fonctions plus avancées et gestion rigoureuse de la mémoire

### Jour 13 · Bibliothèque graphique
- Découverte de **CSFML**
- Création d'une fenêtre, gestion des événements, affichage de sprites

---

## 🔍 Ce que j'en retiens

- **Les jours difficiles (06, 09, 10) m'ont appris le plus** : c'est là qu'il a fallu vraiment comprendre la mémoire et les pointeurs.
- Lire une erreur de compilation ou une *segfault* est une compétence en soi.
- Le travail d'équipe pendant les rushes a été un vrai plus.

---

## 🗂️ Structure du dépôt

```
.
├── day01/
├── day02/
├── ...
├── rush01/
├── rush02/
├── count_island/
├── star/
└── README.md
```

---

## ⚠️ Note

Ce dépôt est publié à titre de portfolio et de mémoire de mon parcours. Si tu es en piscine, ne copie pas : c'est en bloquant et en cherchant que l'on progresse.
