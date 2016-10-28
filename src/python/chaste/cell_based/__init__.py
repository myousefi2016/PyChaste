"""
.. module:: chaste.mesh
   :synopsis: Chaste mesh functionality

.. moduleauthor:: James Grogan <grogan@maths.ox.ac.cuk>


"""
import warnings

# At the moment there are many harmless duplicate registration warnings from boost python. Ignore them until a suitable
# way to avoid duplicate registration during wrapper building is found.
warnings.filterwarnings("ignore")

from _chaste_project_PyChaste_cell_based import *
from fortests import *