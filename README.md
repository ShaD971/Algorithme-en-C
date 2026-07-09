# Algorithmes en C

Ce dépôt regroupe des exercices d'algorithmes écrits en langage C. Il contient des exemples de récursivité et plusieurs méthodes de tri classiques.

## Structure du dépôt

```text
.
├── Recursivite/
│   ├── DecFactPremier.c
│   ├── Detecte_Palindrome.c
│   ├── Factorielle.c
│   ├── Puissance.c
│   ├── fibonacci.c
│   └── hanoi.c
├── Les_tris/
│   ├── tri_par_indices.c
│   ├── trisAbulles.c
│   ├── trisSelection.c
│   └── tris_shell.c
└── README.md
```

## Algorithmes

### Récursivité

- Puissance d'un nombre
- Factorielle de N
- Suite de Fibonacci
- Détection d'un palindrome
- Tours de Hanoï
- Décomposition en facteurs premiers

### Tri

- Tri par sélection / échange
- Tri à bulles
- Tri de Shell
- Tri par indices

## Compilation avec gcc

Chaque fichier C peut être compilé séparément. Depuis la racine du dépôt :

```bash
gcc Recursivite/fibonacci.c -o fibonacci
gcc Recursivite/DecFactPremier.c -o DecFactPremier -lm
gcc Les_tris/trisSelection.c -o trisSelection
```

Sous Windows, vous pouvez aussi produire des exécutables `.exe` :

```powershell
gcc .\Recursivite\fibonacci.c -o fibonacci.exe
gcc .\Les_tris\tri_par_indices.c -o tri_par_indices.exe
```

## Exécution

```bash
./fibonacci
./trisSelection
```

Sous Windows :

```powershell
.\fibonacci.exe
.\trisSelection.exe
```
