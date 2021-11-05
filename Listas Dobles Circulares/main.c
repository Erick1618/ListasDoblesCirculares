#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <allegro.h>
#include "lista.h"

/////////////////////////////////////////////////////////////////////////
int main()
{
    allegro_init();
    install_keyboard();
    install_mouse();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1280,720, 0, 0);

    BITMAP *buffer = create_bitmap(1280,720);
    BITMAP *principal = load_bitmap("principal.bmp",NULL);

    BITMAP *fondo1 = load_bitmap("fondo1.bmp",NULL);
    BITMAP *fondo2 = load_bitmap("fondo2.bmp",NULL);
    BITMAP *fondo3 = load_bitmap("fondo3.bmp",NULL);
    BITMAP *fondo4 = load_bitmap("fondo4.bmp",NULL);
    BITMAP *fondo5 = load_bitmap("fondo5.bmp",NULL);
    BITMAP *fondo6 = load_bitmap("fondo6.bmp",NULL);
    BITMAP *fondo7 = load_bitmap("fondo7.bmp",NULL);
    BITMAP *fondo8 = load_bitmap("fondo8.bmp",NULL);
    BITMAP *fondo9 = load_bitmap("fondo9.bmp",NULL);

    BITMAP *busca = load_bitmap("busca.bmp",NULL);
    BITMAP *busca1 = load_bitmap("busca1.bmp",NULL);
    BITMAP *busca2 = load_bitmap("busca2.bmp",NULL);
    BITMAP *busca3 = load_bitmap("busca3.bmp",NULL);
    BITMAP *busca4 = load_bitmap("busca4.bmp",NULL);
    BITMAP *busca5 = load_bitmap("busca5.bmp",NULL);
    BITMAP *busca6 = load_bitmap("busca6.bmp",NULL);
    BITMAP *busca7 = load_bitmap("busca7.bmp",NULL);
    BITMAP *busca8 = load_bitmap("busca8.bmp",NULL);
    BITMAP *borrar = load_bitmap("borrar.bmp",NULL);
    BITMAP *borrar1 = load_bitmap("borrar1.bmp",NULL);

    BITMAP *menu = load_bitmap("menu.bmp",NULL);
    BITMAP *menu1 = load_bitmap("menu1.bmp",NULL);
    BITMAP *menu2 = load_bitmap("menu2.bmp",NULL);
    BITMAP *menu3 = load_bitmap("menu3.bmp",NULL);
    BITMAP *info = load_bitmap("info.bmp",NULL);
    BITMAP *info1 = load_bitmap("info1.bmp",NULL);
    BITMAP *info2 = load_bitmap("info2.bmp",NULL);
    BITMAP *alum = load_bitmap("alum.bmp",NULL);
    BITMAP *alum1 = load_bitmap("alum1.bmp",NULL);

    BITMAP *codigo = load_bitmap("codigo.bmp",NULL);
    BITMAP *codigo1 = load_bitmap("codigo1.bmp",NULL);
    BITMAP *codigo2 = load_bitmap("codigo2.bmp",NULL);
    int i;
    TdatoD temp = NULL;
    TdatoD nuevo = NULL;
    TdatoD  listaDC = NULL;
    TdatoD ultimo = NULL;

    for(i=1; i<4; i++)
    {
        nuevo = addDato(i);
        temp = AgregarLDC(&listaDC, &nuevo,&ultimo);
    }





    FONT* letra=load_font("Felix Titling.pcx",NULL,NULL);




    int op;
    int sig = 0;
    int fondo=0;
    int buscar = 0;
    int eliminar = 0;
    int Menu1=0;
    int Menu2=0;
    int Menu3=0;
    int Codigo=0;
    int Codigo1=0;
    int Codigo2=0;

    while(!key[KEY_ESC])
    {



        if(mouse_x>1041&&mouse_x<1155&&
        mouse_y>500&&mouse_y<536)
        {

            blit(menu2,buffer,0,0,0,0,1280,720);

            if(mouse_b == 1)
            {
                Menu1=0;
                rest(150);

                while(Menu1!=1){

                     if(mouse_x>1080&&mouse_x<1208&&
                     mouse_y>650&&mouse_y<683)
                    {
                        blit(info,buffer,0,0,0,0,1280,720);
                        if(mouse_b==1)
                        {
                            Menu1=1;
                        }
                    }
                    else
                     {
                        blit(info1,buffer,0,0,0,0,1280,720);
                     }
                    if(mouse_x>1153&&mouse_x<1245&&
                     mouse_y>489&&mouse_y<522)
                    {
                        blit(info2,buffer,0,0,0,0,1280,720);
                        if(mouse_b==1)
                        {
                            Codigo = 1;
                            while(!key[KEY_X])
                            {
                                if(mouse_x>1224&&mouse_x<1261&&
                                mouse_y>326&&mouse_y<461)
                                {
                                    if(mouse_b==1)
                                    {
                                        mouse_b = 0;
                                        Codigo=ImprimirA(&listaDC);

                                    }
                                }
                                if(mouse_x>19&&mouse_x<56&&
                                mouse_y>326&&mouse_y<461)
                                {
                                    if(mouse_b==1)
                                    {
                                         mouse_b = 0;
                                        Codigo=ImprimirA(&listaDC);
                                    }
                                }



                                switch(Codigo)
                                {
                                    case 1:blit(codigo,buffer,0,0,0,0,1280,720);break;
                                    case 2:blit(codigo1,buffer,0,0,0,0,1280,720);break;
                                    case 3:blit(codigo2,buffer,0,0,0,0,1280,720);break;

                                }
                                textout(buffer, letra, "PRESIONA [X] PARA REGRESAR",10, 680, 0xFFFFFF);
                                show_mouse(buffer);
                                blit(buffer,screen,0,0,0,0,1280,720);

                            }
                        }



                    }

                     show_mouse(buffer);
                     blit(buffer,screen,0,0,0,0,1280,720);
                }
            }
        }
          else
        {
          blit(menu,buffer,0,0,0,0,1280,720);
        }



            if(mouse_x>62&&mouse_x<313&&
             mouse_y>501&&mouse_y<537)
            {
                 blit(menu3,buffer,0,0,0,0,1280,720);

                 if(mouse_b == 1)
                 {
                     Menu2=0;
                     rest(150);

                     while(Menu2!=1)
                     {
                        if(mouse_x>1080&&mouse_x<1208&&
                         mouse_y>650&&mouse_y<683)
                         {
                             blit(alum,buffer,0,0,0,0,1280,720);

                             if(mouse_b==1)
                             {
                                  Menu2=1;
                              }
                          }
                         else
                          {
                             blit(alum1,buffer,0,0,0,0,1280,720);
                          }

                         show_mouse(buffer);
                         blit(buffer,screen,0,0,0,0,1280,720);
                    }
                }
             }



                  if(mouse_x>530&&mouse_x<752&&
                  mouse_y>499&&mouse_y<538)
                  {
                       blit(menu1,buffer,0,0,0,0,1280,720);

                       if(mouse_b == 1)
                       {
                           Menu3=0;
                           rest(150);

                           blit(principal,buffer,0,0,0,0,1280,720);
                           while(Menu3!=1)
                           {
                               if(mouse_x>0&&mouse_x<148&&
                               mouse_y>147&&mouse_y<210)
                                {
                                    int gh = 0;
                                     if(mouse_b == 1)
                                       {
                                           mouse_b=0;
                                           gh = 1;
                                           if(gh= 1)
                                            {
                                               op = 1;

                                                fondo = fondo+1;
                                            }
                                       }
                                  }

                                  if(mouse_x>0&&mouse_x<148&&
                                     mouse_y>269&&mouse_y<330)
                                   {
                                       int ch=0;
                                        if(mouse_b == 1)
                                         {
                                             mouse_b=0;
                                             ch=1;
                                             if(ch=1)
                                              {
                                                    op = 2;

                                                      eliminar++;
                                               }
                                         }
                                   }
                                   if(mouse_x>0&&mouse_x<148&&
                                     mouse_y>390&&mouse_y<452)
                                     {
                                         int pup = 0;
                                        if(mouse_b == 1)
                                        {
                                            mouse_b=0;
                                            pup=1;
                                            if(pup=1)
                                            {
                                                   op = 3;

                                                   buscar++;
                                             }
                                         }
                                     }
                                     if(mouse_x>0&&mouse_x<148&&
                                       mouse_y>579&&mouse_y<642)
                                      {
                                          if(mouse_b == 1)
                                           {

                                                 op = 4;
                                            }
                                       }
                                       if(key[KEY_E])
                                       {
                                           Menu3=1;
                                       }




                                       switch(op)
                                      {
                                              case 1: switch (fondo)
                                                      {
                                                           case 1: blit(fondo1,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",310, 110, 0xFFFFFF);
                                                                   break;

                                                           case 2: blit(fondo2,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",310, 110, 0xFFFFFF);textout(buffer, letra, "10",512, 110, 0xFFFFFF); break;

                                                           case 3: blit(fondo3,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);textout(buffer, letra, "73",730, 110, 0xFFFFFF);break;

                                                           case 4: blit(fondo4,buffer,0,0,0,0,1280,720);   textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",730, 110, 0xFFFFFF); textout(buffer, letra, "69",310, 285, 0xFFFFFF); break;

                                                           case 5: blit(fondo5,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",730, 110, 0xFFFFFF); textout(buffer, letra, "69",512, 275, 0xFFFFFF); break;

                                                           case 6: blit(fondo6,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",730, 110, 0xFFFFFF); textout(buffer, letra, "69",730, 275, 0xFFFFFF); break;

                                                           case 7: blit(fondo7,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 275, 0xFFFFFF); break;

                                                           case 8: blit(fondo8,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF); break;

                                                           case 9: blit(fondo9,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                       }

                                                        break;
                                            case 2: switch (eliminar)
                                                    {
                                                          case 1: blit(busca,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 2: blit(busca1,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 3: blit(busca2,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 4: blit(busca3,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 5: blit(busca4,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 6: blit(busca5,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;
                                                          case 7: blit(busca6,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;
                                                          case 8: blit(busca7,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;
                                                          case 9: blit(borrar,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",867, 491, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 10: blit(borrar1,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",867, 491, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;
                                                      }

                                                          break;

                                            case 3: switch (buscar)
                                                    {
                                                          case 1: blit(busca,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 2: blit(busca1,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 3: blit(busca2,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;
                                                          case 4: blit(busca3,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 5: blit(busca4,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 6: blit(busca5,buffer,0,0,0,0,1280,720); textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 7: blit(busca6,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 8: blit(busca7,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); break;

                                                          case 9: blit(busca8,buffer,0,0,0,0,1280,720);  textout(buffer, letra, "65",512, 110, 0xFFFFFF);textout(buffer, letra, "10",310, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "73",1045, 110, 0xFFFFFF); textout(buffer, letra, "69",782, 110, 0xFFFFFF);
                                                           textout(buffer, letra, "77",376, 321, 0xFFFFFF);textout(buffer, letra, "97",614, 321, 0xFFFFFF);textout(buffer, letra, "100",843, 321, 0xFFFFFF);
                                                           textout(buffer, letra, "122",1106, 321, 0xFFFFFF); textout(buffer, letra, "100",843, 491, 0xFFFFFF);break;
                                                     }

                                                       break;

                                             case 4:  fondo = 0;
                                                      buscar = 0;
                                                      eliminar = 0;
                                                      blit(principal,buffer,0,0,0,0,1280,720);  ;break;



                                      }
                                   textout(buffer, letra, "PRESIONA [E] PARA REGRESAR AL MENU",465, 680, 0xFFFFFF);
                                  show_mouse(buffer);
                                  blit(buffer,screen,0,0,0,0,1280,720);
                            }
                       }
                  }







        textout(buffer, letra, "PRESIONA [ESC] PARA SALIR",465, 680, 0xFFFFFF);
        show_mouse(buffer);
        blit(buffer,screen,0,0,0,0,1280,720);
    }
     if(listaDC)
     {
         temp = listaDC;
        do{
            free(temp);
            temp = temp->sig;

        }while(temp != listaDC);
    }

    allegro_exit();
    destroy_bitmap(buffer);
    return 0;
}

END_OF_MAIN();


