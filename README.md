# Piscine C — 42 Paris · Août 2026

Bienvenue sur mon repository dédié à ma **Piscine C de 42**, réalisée en **août 2026**.

La Piscine C est une période intensive d'environ un mois permettant de découvrir et d'approfondir les fondamentaux de la **programmation en C**, d'Unix et de la méthodologie pédagogique propre à 42.

L'objectif n'est pas uniquement d'apprendre à coder, mais surtout de développer une capacité à **chercher, comprendre, résoudre des problèmes et apprendre de manière autonome**.

> ⚠️ **Important : ce repository est public et disponible à titre éducatif.**
>
> Vous pouvez bien évidemment vous en inspirer, mais si vous êtes actuellement en Piscine, je vous déconseille fortement de copier-coller les solutions sans chercher à les comprendre.
>
> La Piscine est avant tout un exercice d'apprentissage. Comprendre une solution vaut largement mieux que simplement obtenir une bonne note. De plus, les connaissances acquises pendant les days sont directement utiles pour les examens machines.

---

## Contenu du repository

Vous trouverez ici les différents projets et exercices réalisés durant la Piscine :

* 🐚 **Shell** — découverte d'Unix et des commandes essentielles
* 💻 **C** — apprentissage progressif du langage C
* 📖 **Days** — exercices quotidiens permettant de progresser étape par étape

Les solutions présentes correspondent à mon propre parcours durant la Piscine et peuvent donc contenir des erreurs, des approches discutables ou des solutions qui ne sont pas forcément les plus optimisées.

---

# Avant la Piscine

Il est tout à fait possible de réussir la Piscine sans avoir programmé auparavant.

Cependant, avoir quelques bases peut permettre de consacrer davantage de temps à la compréhension des exercices et à la pédagogie de 42.

### [![Tools](https://skillicons.dev/icons?i=linux)](https://skillicons.dev) Familiarisez-vous avec Linux

Apprenez notamment à utiliser :

```bash
ls
cd
pwd
mkdir
rm
cp
mv
cat
grep
find
chmod
man
git
```
### 💻 Quelques bases en C

Avant de commencer, il peut être intéressant de comprendre les notions suivantes :

* variables et types
* conditions
* boucles
* fonctions
* tableaux
* pointeurs
* chaînes de caractères
* compilation avec `gcc`
* fichiers `.c` et `.h`

Mais surtout, ne cherchez pas à tout apprendre à l'avance. Une grande partie de la Piscine consiste justement à **apprendre en pratiquant**.

---

# Pendant la Piscine

## Ne restez pas seul

C'est probablement l'un des conseils les plus importants.

À 42, le **peer-learning** occupe une place centrale. Si vous êtes bloqué, demandez de l'aide à quelqu'un.

Vous pouvez :

* demander à un autre piscineux de vous expliquer son raisonnement ;
* expliquer votre propre problème à quelqu'un ;
* comparer différentes méthodes ;
* utiliser les moteurs de recherche ;
* consulter le `man` lorsque vous êtes sur une machine d'examen.

Et surtout, **n'ayez pas peur de demander de l'aide**.

Vous serez vous-même amené à aider d'autres personnes, et expliquer un concept est souvent l'un des meilleurs moyens de vérifier qu'on l'a réellement compris.

---

## Apprenez à chercher

Vous n'aurez pas toujours quelqu'un à côté de vous pour vous donner la réponse.

La capacité à rechercher une information est donc essentielle.

Prenez l'habitude de :

```bash
man commande
```

et de chercher la documentation d'une fonction avant de demander directement sa solution.

Pendant les examens machines, Internet n'est pas disponible : le `man` devient alors votre meilleur ami.

---

## Prenez soin de vous

La Piscine dure environ un mois et le rythme peut être très intense.

Essayez de :

* dormir suffisamment ;
* manger correctement ;
* faire des pauses ;
* sortir prendre l'air ;
* garder un peu de temps pour vous.

Passer 24h sur un exercice bloqué n'est pas forcément plus efficace que de dormir quelques heures et de revenir dessus avec un esprit frais.

> **La Piscine est un marathon, pas un sprint.**

---

## Ne cherchez pas forcément le 100 %

Si vous bloquez sur un exercice particulièrement difficile, ne restez pas dessus indéfiniment.

Avancez sur les exercices suivants et revenez-y plus tard.

Les derniers exercices d'un `day` sont souvent plus difficiles que les premiers exercices du `day` suivant.

L'objectif est avant tout de **progresser régulièrement**.

---

#  Déroulement de la Piscine

Chaque semaine suit globalement le même rythme.

## Lundi → Jeudi — Les Days

Le début de semaine est consacré aux différents `days` :

```text
shell00
shell01
c00
c01
c02
...
```

Chaque `day` contient plusieurs exercices à réaliser.

Une fois les exercices terminés, ils sont rendus via Git puis soumis à une correction.

### Corrections humaines

Les exercices sont d'abord corrigés par **deux autres piscineux**.

Ces corrections permettent notamment :

* d'échanger avec d'autres personnes ;
* de découvrir différentes façons de résoudre un problème ;
* de recevoir des conseils ;
* d'apprendre à lire et comprendre le code de quelqu'un d'autre.

### La Moulinette

Une correction automatique, appelée **Moulinette**, vérifie ensuite votre travail.

Elle vérifie notamment que le code :

* compile correctement ;
* respecte certaines contraintes ;
* fonctionne sur différents tests.

Une note finale est ensuite calculée à partir des différentes corrections.

Si la moyenne est suffisante, vous pouvez passer au `day` suivant.

---

# Vendredi — Exam 

Le vendredi est consacré à l'**exam**.

Vous devez résoudre une série d'exercices dans un temps limité.

Les exercices ressemblent généralement à ceux rencontrés pendant les `days`, mais les conditions sont différentes :

* temps limité ;
* pas d'accès à Internet ;
* correction automatique ;
* utilisation du `man` pour rechercher des informations.

Les premiers examens permettent généralement de consulter un historique des tests afin de mieux comprendre les erreurs rencontrées.

L'examen final est plus long et demande de mobiliser l'ensemble des connaissances acquises pendant la Piscine.

---

# Week-end — Les Rushs

Le week-end est consacré aux **Rushs**.

Contrairement aux `days`, les Rushs sont réalisés **en groupe**, avec une équipe généralement constituée aléatoirement.

Ils sont souvent plus ouverts et plus difficiles que les exercices classiques.

Vous disposez généralement de **48 heures** pour réaliser le projet.

Les Rushs sont également l'occasion de travailler davantage sur :

* le travail en équipe ;
* Git ;
* l'organisation du projet ;
* la communication ;
* la répartition des tâches ;
* la lecture du code des autres.

Les Rushs sont corrigés par des membres du staff et sont les seuls projets de la Piscine permettant généralement de proposer des **bonus ou fonctionnalités supplémentaires**.

---

# Ce que la Piscine m'a apporté

Au-delà du langage C, cette Piscine m'a permis de travailler sur plusieurs compétences essentielles :

* 🧠 résolution de problèmes ;
* 🔎 recherche et compréhension de documentation ;
* 🐧 environnement Unix ;
* 💻 programmation en C ;
* 🔀 Git et gestion de versions ;
* 🤝 travail en équipe ;
* 🗣️ communication et peer-learning ;
* ⏱️ gestion du temps ;
* 🧩 autonomie face à un problème inconnu.

La difficulté de la Piscine ne vient pas uniquement des exercices : elle vient aussi de la nécessité de **s'adapter rapidement à des problèmes que l'on n'a jamais rencontrés auparavant**.

---

# Quelques conseils pour les futurs piscineux

### 1. Ne copiez pas les solutions

Même si vous trouvez une solution en ligne ou dans le repository de quelqu'un, essayez d'abord de comprendre le problème par vous-même.

### 2. Demandez de l'aide

Être bloqué est normal. Ne restez simplement pas bloqué pendant plusieurs heures sans essayer une autre approche.

### 3. Aidez les autres

Expliquer un exercice à quelqu'un est un excellent moyen de vérifier que vous avez réellement compris.

### 4. Faites du Git régulièrement

Prenez l'habitude de rendre votre travail proprement et régulièrement.

### 5. Préparez-vous aux examens

Les examens sont très différents des days. Entraînez-vous à coder **sans Internet**, uniquement avec vos connaissances et le `man`.

### 6. Dormez

Oui, vraiment.

Vous serez beaucoup plus efficace après quelques heures de sommeil qu'après une nuit entière passée à fixer un pointeur qui ne fonctionne pas. 😄

---

#  Organisation du repository

```text
.
├── shell00/
├── shell01/
├── c00/
├── c01/
├── c02/
├── ...
├── rush00/
├── rush01/
└── exam/
```

L'organisation peut évoluer au fur et à mesure de la Piscine.

---

# ⚠️ Disclaimer

Ce repository a été créé dans un but **éducatif et personnel**.

Les exercices et solutions sont publiés afin de garder une trace de mon parcours et éventuellement aider les personnes souhaitant comprendre le déroulement de la Piscine.

Si vous êtes actuellement piscineux à 42 :

> **N'utilisez pas ce repository comme une solution à copier. Utilisez-le comme une source d'inspiration, comparez les approches et surtout, comprenez le code que vous utilisez.**

Bonne chance à tous les futurs piscineux ! 💪

**See you at 42. 🚀**
