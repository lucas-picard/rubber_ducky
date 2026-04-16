# Rubber Ducky 🦆

Ce dossier explique ce qu’est une **Rubber Ducky** et comment créer ses propres scripts.

Une Rubber Ducky est un périphérique USB qui se fait passer pour un **clavier**.  
Lorsqu’elle est branchée à un ordinateur, elle peut **taper automatiquement une suite de touches et de commandes**.

Elle est souvent utilisée pour :

- automatiser des tâches
- lancer des scripts rapidement
- faire des démonstrations
- apprendre le fonctionnement des macros clavier

---

## ⚙️ Comment ça fonctionne

Le principe est simple :  
la Rubber Ducky envoie une suite d’appuis clavier comme si un utilisateur écrivait au clavier.

Exemple :

```text
DELAY 1000
STRING Hello World
ENTER
```

Ce script attend 1 seconde, écrit **Hello World**, puis appuie sur Entrée.

---

## 🛠 Créer un script

Les scripts se font généralement dans un fichier texte avec une syntaxe simple.

Exemple :

```text
DELAY 1000
GUI r
DELAY 500
STRING notepad
ENTER
```

Ici :

- `DELAY` → attend un temps en millisecondes
- `GUI r` → ouvre le menu Exécuter sur Windows
- `STRING` → écrit du texte
- `ENTER` → appuie sur Entrée

---

## 📁 Exemples

Des **exemples de scripts sont disponibles dans les dossiers ci-dessus**.

Ils peuvent servir de base pour créer vos propres scripts et comprendre le fonctionnement.

---

## ⚠️ Important

À utiliser uniquement sur **vos propres appareils**.
