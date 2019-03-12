/**
 * \file polynome.c
 * \brief Fonctions de manipulation de polynômes.
 */

#include "polynome.h"

////////////////////////////////////////////////////////////////////////////////
// Constructeurs
////////////////////////////////////////////////////////////////////////////////

polynome* polynome_addition(const polynome* const P1, const polynome* const P2)
{
  liste* resultat = liste_vide();

  /* (Peut-être) À compléter ou modifier. */

  resultat = liste_normaliser(resultat);

  return resultat;
}

polynome* polynome_multiplication(
    const polynome* const P1, const polynome* const P2)
{
  /* (Peut-être) À compléter ou modifier. */
  return 0;
}

polynome* polynome_derivee(const polynome* const P1)
{
  /* (Peut-être) À compléter ou modifier. */
  return 0;
}

////////////////////////////////////////////////////////////////////////////////
// Divers
////////////////////////////////////////////////////////////////////////////////

void polynome_free(polynome* p)
{
  /* (Peut-être) À compléter ou modifier. */
}

polynome* polynome_sread(const char* string)
{
  polynome* p = liste_sread(string);
  p = liste_normaliser(p);
  return p;
}

polynome* polynome_fread(FILE* const stream)
{
  polynome* p = liste_fread(stream);
  p = liste_normaliser(p);
  return p;
}

void polynome_fwrite(FILE* const stream, const polynome* const p)
{
  liste_fwrite(stream, p);
}
